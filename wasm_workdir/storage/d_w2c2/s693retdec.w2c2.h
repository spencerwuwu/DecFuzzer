#ifndef s693retdec_H
#define s693retdec_H

#include "w2c2_base.h"

typedef struct s693retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s693retdecInstance;

void f0(s693retdecInstance*);

void f1(s693retdecInstance*);

U32 f2(s693retdecInstance*);

void f3(s693retdecInstance*,U32);

U32 f4(s693retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s693retdecInstance*,U32,U32,U32,U32,U32);

void f6(s693retdecInstance*,U32);

void f7(s693retdecInstance*,U32,U32,U32);

void f8(s693retdecInstance*,U32,U32,U32);

void s693retdec____wasm_call_ctors(s693retdecInstance*i);

void s693retdec____wasm_apply_data_relocs(s693retdecInstance*i);

U32 s693retdec_func_1(s693retdecInstance*i);

void s693retdec_call_cb(s693retdecInstance*i,U32 l0);

void s693retdecInstantiate(s693retdecInstance* instance, void* resolve(const char* module, const char* name));

void s693retdecFreeInstance(s693retdecInstance* instance);

#endif /* s693retdec_H */

