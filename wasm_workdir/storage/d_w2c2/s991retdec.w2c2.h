#ifndef s991retdec_H
#define s991retdec_H

#include "w2c2_base.h"

typedef struct s991retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s991retdecInstance;

void f0(s991retdecInstance*);

void f1(s991retdecInstance*);

U32 f2(s991retdecInstance*);

void f3(s991retdecInstance*,U32);

U32 f4(s991retdecInstance*,U32,U32,U32,U32,U32);

void f5(s991retdecInstance*,U32,U32,U32,U32,U32);

void f6(s991retdecInstance*,U32);

void f7(s991retdecInstance*,U32,U32,U32);

void f8(s991retdecInstance*,U32,U32,U32);

void s991retdec____wasm_call_ctors(s991retdecInstance*i);

void s991retdec____wasm_apply_data_relocs(s991retdecInstance*i);

U32 s991retdec_func_1(s991retdecInstance*i);

void s991retdec_call_cb(s991retdecInstance*i,U32 l0);

void s991retdecInstantiate(s991retdecInstance* instance, void* resolve(const char* module, const char* name));

void s991retdecFreeInstance(s991retdecInstance* instance);

#endif /* s991retdec_H */

