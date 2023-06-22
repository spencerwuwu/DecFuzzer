#ifndef s940retdec_H
#define s940retdec_H

#include "w2c2_base.h"

typedef struct s940retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s940retdecInstance;

void f0(s940retdecInstance*);

void f1(s940retdecInstance*);

U32 f2(s940retdecInstance*);

void f3(s940retdecInstance*,U32);

U32 f4(s940retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s940retdecInstance*,U32,U32,U32,U32,U32);

void f6(s940retdecInstance*,U32);

void f7(s940retdecInstance*,U32,U32,U32);

void f8(s940retdecInstance*,U32,U32,U32);

void s940retdec____wasm_call_ctors(s940retdecInstance*i);

void s940retdec____wasm_apply_data_relocs(s940retdecInstance*i);

U32 s940retdec_func_1(s940retdecInstance*i);

void s940retdec_call_cb(s940retdecInstance*i,U32 l0);

void s940retdecInstantiate(s940retdecInstance* instance, void* resolve(const char* module, const char* name));

void s940retdecFreeInstance(s940retdecInstance* instance);

#endif /* s940retdec_H */

