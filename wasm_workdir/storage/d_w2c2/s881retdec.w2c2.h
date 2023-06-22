#ifndef s881retdec_H
#define s881retdec_H

#include "w2c2_base.h"

typedef struct s881retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s881retdecInstance;

void f0(s881retdecInstance*);

void f1(s881retdecInstance*);

U32 f2(s881retdecInstance*);

void f3(s881retdecInstance*,U32);

U32 f4(s881retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s881retdecInstance*,U32,U32,U32,U32,U32);

void f6(s881retdecInstance*,U32);

void f7(s881retdecInstance*,U32,U32,U32);

void f8(s881retdecInstance*,U32,U32,U32);

void s881retdec____wasm_call_ctors(s881retdecInstance*i);

void s881retdec____wasm_apply_data_relocs(s881retdecInstance*i);

U32 s881retdec_func_1(s881retdecInstance*i);

void s881retdec_call_cb(s881retdecInstance*i,U32 l0);

void s881retdecInstantiate(s881retdecInstance* instance, void* resolve(const char* module, const char* name));

void s881retdecFreeInstance(s881retdecInstance* instance);

#endif /* s881retdec_H */

