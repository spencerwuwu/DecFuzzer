#ifndef s396retdec_H
#define s396retdec_H

#include "w2c2_base.h"

typedef struct s396retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s396retdecInstance;

void f0(s396retdecInstance*);

void f1(s396retdecInstance*);

U32 f2(s396retdecInstance*);

void f3(s396retdecInstance*,U32);

U32 f4(s396retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s396retdecInstance*,U32,U32,U32,U32,U32);

void f6(s396retdecInstance*,U32);

void f7(s396retdecInstance*,U32,U32,U32);

void f8(s396retdecInstance*,U32,U32,U32);

void s396retdec____wasm_call_ctors(s396retdecInstance*i);

void s396retdec____wasm_apply_data_relocs(s396retdecInstance*i);

U32 s396retdec_func_1(s396retdecInstance*i);

void s396retdec_call_cb(s396retdecInstance*i,U32 l0);

void s396retdecInstantiate(s396retdecInstance* instance, void* resolve(const char* module, const char* name));

void s396retdecFreeInstance(s396retdecInstance* instance);

#endif /* s396retdec_H */

