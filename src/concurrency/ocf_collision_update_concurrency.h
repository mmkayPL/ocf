/*
 * Copyright(c) 2021-2021 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef OCF_COLLISION_UPDATE_CONCURRENCY_H_
#define OCF_COLLISION_UPDATE_CONCURRENCY_H_

#include "../utils/utils_alock.h"

int ocf_coll_update_async_lock(struct ocf_alock *alock,
		struct metadata_io_request *m_req,
		ocf_req_async_lock_cb cmpl);

void ocf_coll_update_async_unlock(struct ocf_alock *alock,
		struct metadata_io_request *m_req);

int ocf_coll_update_concurrency_init(struct ocf_alock **self,
		unsigned num_pages, ocf_cache_t cache);

void ocf_coll_update_concurrency_deinit(struct ocf_alock **self);

#endif
