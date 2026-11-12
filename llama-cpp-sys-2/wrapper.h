#include "llama.cpp/include/llama.h"
#include "llama.cpp/ggml/include/gguf.h"

#ifdef LLAMA_RS_BUILD_COMMON
#include "wrapper_common.h"
#endif
LLAMA_API llama_rs_status llama_rs_set_embeddings_nextn(struct llama_context * ctx, bool value, bool masked);
