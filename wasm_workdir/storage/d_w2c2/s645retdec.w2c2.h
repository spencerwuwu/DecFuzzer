#ifndef s645retdec_H
#define s645retdec_H

#include "w2c2_base.h"

typedef struct s645retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s645retdecInstance;

void f0(s645retdecInstance*);

void f1(s645retdecInstance*);

U32 f2(s645retdecInstance*);

void f3(s645retdecInstance*,U32);

U32 f4(s645retdecInstance*,U32,U32,U32,U32);

void f5(s645retdecInstance*,U32,U32,U32,U32,U32);

void f6(s645retdecInstance*,U32);

void f7(s645retdecInstance*,U32,U32,U32);

void f8(s645retdecInstance*,U32,U32,U32);

void s645retdec____wasm_call_ctors(s645retdecInstance*i);

void s645retdec____wasm_apply_data_relocs(s645retdecInstance*i);

U32 s645retdec_func_1(s645retdecInstance*i);

void s645retdec_call_cb(s645retdecInstance*i,U32 l0);

void s645retdecInstantiate(s645retdecInstance* instance, void* resolve(const char* module, const char* name));

void s645retdecFreeInstance(s645retdecInstance* instance);

#endif /* s645retdec_H */

