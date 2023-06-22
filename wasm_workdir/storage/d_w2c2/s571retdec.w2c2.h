#ifndef s571retdec_H
#define s571retdec_H

#include "w2c2_base.h"

typedef struct s571retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s571retdecInstance;

void f0(s571retdecInstance*);

void f1(s571retdecInstance*);

U32 f2(s571retdecInstance*);

void f3(s571retdecInstance*,U32);

U32 f4(s571retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s571retdecInstance*,U32,U32,U32,U32,U32);

void f6(s571retdecInstance*,U32);

void f7(s571retdecInstance*,U32,U32,U32);

void f8(s571retdecInstance*,U32,U32,U32);

void s571retdec____wasm_call_ctors(s571retdecInstance*i);

void s571retdec____wasm_apply_data_relocs(s571retdecInstance*i);

U32 s571retdec_func_1(s571retdecInstance*i);

void s571retdec_call_cb(s571retdecInstance*i,U32 l0);

void s571retdecInstantiate(s571retdecInstance* instance, void* resolve(const char* module, const char* name));

void s571retdecFreeInstance(s571retdecInstance* instance);

#endif /* s571retdec_H */

