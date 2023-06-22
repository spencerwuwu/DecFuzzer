#ifndef s674retdec_H
#define s674retdec_H

#include "w2c2_base.h"

typedef struct s674retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s674retdecInstance;

void f0(s674retdecInstance*);

void f1(s674retdecInstance*);

U32 f2(s674retdecInstance*);

void f3(s674retdecInstance*,U32);

U32 f4(s674retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s674retdecInstance*,U32,U32,U32,U32,U32);

void f6(s674retdecInstance*,U32);

void f7(s674retdecInstance*,U32,U32,U32);

void f8(s674retdecInstance*,U32,U32,U32);

void s674retdec____wasm_call_ctors(s674retdecInstance*i);

void s674retdec____wasm_apply_data_relocs(s674retdecInstance*i);

U32 s674retdec_func_1(s674retdecInstance*i);

void s674retdec_call_cb(s674retdecInstance*i,U32 l0);

void s674retdecInstantiate(s674retdecInstance* instance, void* resolve(const char* module, const char* name));

void s674retdecFreeInstance(s674retdecInstance* instance);

#endif /* s674retdec_H */

