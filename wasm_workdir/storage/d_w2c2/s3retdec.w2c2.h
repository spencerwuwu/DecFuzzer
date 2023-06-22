#ifndef s3retdec_H
#define s3retdec_H

#include "w2c2_base.h"

typedef struct s3retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s3retdecInstance;

void f0(s3retdecInstance*);

void f1(s3retdecInstance*);

U32 f2(s3retdecInstance*);

void f3(s3retdecInstance*,U32);

U32 f4(s3retdecInstance*,U32,U32,U32);

void f5(s3retdecInstance*,U32,U32,U32,U32,U32);

void f6(s3retdecInstance*,U32);

void f7(s3retdecInstance*,U32,U32,U32);

void f8(s3retdecInstance*,U32,U32,U32);

void s3retdec____wasm_call_ctors(s3retdecInstance*i);

void s3retdec____wasm_apply_data_relocs(s3retdecInstance*i);

U32 s3retdec_func_1(s3retdecInstance*i);

void s3retdec_call_cb(s3retdecInstance*i,U32 l0);

void s3retdecInstantiate(s3retdecInstance* instance, void* resolve(const char* module, const char* name));

void s3retdecFreeInstance(s3retdecInstance* instance);

#endif /* s3retdec_H */

