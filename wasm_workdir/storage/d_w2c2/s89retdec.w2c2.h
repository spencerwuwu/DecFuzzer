#ifndef s89retdec_H
#define s89retdec_H

#include "w2c2_base.h"

typedef struct s89retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s89retdecInstance;

void f0(s89retdecInstance*);

void f1(s89retdecInstance*);

U32 f2(s89retdecInstance*);

void f3(s89retdecInstance*,U32);

U32 f4(s89retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s89retdecInstance*,U32,U32,U32,U32,U32);

void f6(s89retdecInstance*,U32);

void f7(s89retdecInstance*,U32,U32,U32);

void f8(s89retdecInstance*,U32,U32,U32);

void s89retdec____wasm_call_ctors(s89retdecInstance*i);

void s89retdec____wasm_apply_data_relocs(s89retdecInstance*i);

U32 s89retdec_func_1(s89retdecInstance*i);

void s89retdec_call_cb(s89retdecInstance*i,U32 l0);

void s89retdecInstantiate(s89retdecInstance* instance, void* resolve(const char* module, const char* name));

void s89retdecFreeInstance(s89retdecInstance* instance);

#endif /* s89retdec_H */

