#ifndef __DPU_COMMON_H__
#define __DPU_COMMON_H__

#define XSTR(x) STR(x)
#define STR(x) #x

// /* DPU variable that will be read of written by the host */
#include "../../../PIM-common/common/include/common.h"

#define DPU_BUFFER dpu_mram_buffer
#define DPU_CACHES dpu_wram_caches
#define DPU_RESULTS dpu_wram_results
#define KEY dpu_wram_key
#define RECORDS_BUFFER dpu_mram_ret_buffer
#define RECORDS_LENGTH dpu_records_len

#define BUFFER_SIZE (1 << 16)//(16<<20)//(3 << 19)
#define MAX_KEY_SIZE 32
#define RETURN_RECORDS_SIZE MEGABYTE(1)
#define MAX_RECORD_SIZE 2048

#endif /* __DPU_COMMON_H__ */