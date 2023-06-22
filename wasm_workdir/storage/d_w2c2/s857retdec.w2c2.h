#ifndef s857retdec_H
#define s857retdec_H

#include "w2c2_base.h"

typedef struct s857retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s857retdecInstance;

void f0(s857retdecInstance*);

void f1(s857retdecInstance*);

U32 f2(s857retdecInstance*);

void f3(s857retdecInstance*,U32);

U32 f4(s857retdecInstance*,U32,U32,U32,U32);

void f5(s857retdecInstance*,U32,U32,U32,U32,U32);

void f6(s857retdecInstance*,U32);

void f7(s857retdecInstance*,U32,U32,U32);

void f8(s857retdecInstance*,U32,U32,U32);

void s857retdec____wasm_call_ctors(s857retdecInstance*i);

void s857retdec____wasm_apply_data_relocs(s857retdecInstance*i);

U32 s857retdec_func_1(s857retdecInstance*i);

void s857retdec_call_cb(s857retdecInstance*i,U32 l0);

void s857retdecInstantiate(s857retdecInstance* instance, void* resolve(const char* module, const char* name));

void s857retdecFreeInstance(s857retdecInstance* instance);

#endif /* s857retdec_H */

