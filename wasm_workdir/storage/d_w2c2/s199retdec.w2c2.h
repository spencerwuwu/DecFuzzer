#ifndef s199retdec_H
#define s199retdec_H

#include "w2c2_base.h"

typedef struct s199retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s199retdecInstance;

void f0(s199retdecInstance*);

void f1(s199retdecInstance*);

U32 f2(s199retdecInstance*);

void f3(s199retdecInstance*,U32);

U32 f4(s199retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s199retdecInstance*,U32,U32,U32,U32,U32);

void f6(s199retdecInstance*,U32);

void f7(s199retdecInstance*,U32,U32,U32);

void f8(s199retdecInstance*,U32,U32,U32);

void s199retdec____wasm_call_ctors(s199retdecInstance*i);

void s199retdec____wasm_apply_data_relocs(s199retdecInstance*i);

U32 s199retdec_func_1(s199retdecInstance*i);

void s199retdec_call_cb(s199retdecInstance*i,U32 l0);

void s199retdecInstantiate(s199retdecInstance* instance, void* resolve(const char* module, const char* name));

void s199retdecFreeInstance(s199retdecInstance* instance);

#endif /* s199retdec_H */

