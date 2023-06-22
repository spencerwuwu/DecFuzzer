#ifndef s250retdec_H
#define s250retdec_H

#include "w2c2_base.h"

typedef struct s250retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s250retdecInstance;

void f0(s250retdecInstance*);

void f1(s250retdecInstance*);

U32 f2(s250retdecInstance*);

void f3(s250retdecInstance*,U32);

U32 f4(s250retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s250retdecInstance*,U32,U32,U32,U32,U32);

void f6(s250retdecInstance*,U32);

void f7(s250retdecInstance*,U32,U32,U32);

void f8(s250retdecInstance*,U32,U32,U32);

void s250retdec____wasm_call_ctors(s250retdecInstance*i);

void s250retdec____wasm_apply_data_relocs(s250retdecInstance*i);

U32 s250retdec_func_1(s250retdecInstance*i);

void s250retdec_call_cb(s250retdecInstance*i,U32 l0);

void s250retdecInstantiate(s250retdecInstance* instance, void* resolve(const char* module, const char* name));

void s250retdecFreeInstance(s250retdecInstance* instance);

#endif /* s250retdec_H */

