#ifndef s335retdec_H
#define s335retdec_H

#include "w2c2_base.h"

typedef struct s335retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s335retdecInstance;

void f0(s335retdecInstance*);

void f1(s335retdecInstance*);

U32 f2(s335retdecInstance*);

void f3(s335retdecInstance*,U32);

U32 f4(s335retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s335retdecInstance*,U32,U32,U32,U32,U32);

void f6(s335retdecInstance*,U32);

void f7(s335retdecInstance*,U32,U32,U32);

void f8(s335retdecInstance*,U32,U32,U32);

void s335retdec____wasm_call_ctors(s335retdecInstance*i);

void s335retdec____wasm_apply_data_relocs(s335retdecInstance*i);

U32 s335retdec_func_1(s335retdecInstance*i);

void s335retdec_call_cb(s335retdecInstance*i,U32 l0);

void s335retdecInstantiate(s335retdecInstance* instance, void* resolve(const char* module, const char* name));

void s335retdecFreeInstance(s335retdecInstance* instance);

#endif /* s335retdec_H */

