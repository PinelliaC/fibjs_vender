/*
 *  fbTls.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "fiber.h"

namespace exlib {

static char s_tls[TLS_SIZE];
static void* s_tls_init[TLS_SIZE];

Thread_base::Thread_base()
    : m_stack_start(0)
{
    memcpy(&m_tls, &s_tls_init, sizeof(m_tls));
}

int tlsAlloc(void** init, int size)
{
    int i, j;

    for (i = 0; i < TLS_SIZE - size + 1; i++) {
        for (j = 0; j < size; j++)
            if (s_tls[i + j])
                break;

        if (j == size) {
            for (j = 0; j < size; j++) {
                s_tls[i + j] = i + TLS_SIZE;
                if (init)
                    s_tls_init[i + j] = init[j];
            }
            return i;
        }
    }

    assert(i < TLS_SIZE - size + 1);

    return -1;
}

void** tlsGetRef(int idx)
{
    assert(Thread_base::current() != 0);
    return &Thread_base::current()->m_tls[idx];
}

void tlsFree(int idx)
{
    int i;

    for (i = idx; i < TLS_SIZE; i++) {
        if (s_tls[i] == idx + TLS_SIZE) {
            s_tls[i] = 0;
            s_tls_init[i] = 0;
        } else
            break;
    }
}
}
