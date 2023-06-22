#ifndef s385retdec_H
#define s385retdec_H

#include "w2c2_base.h"

typedef struct s385retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s385retdecInstance;

void f0(s385retdecInstance*);

void f1(s385retdecInstance*);

U32 f2(s385retdecInstance*);

void f3(s385retdecInstance*,U32);

U32 f4(s385retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s385retdecInstance*,U32,U32,U32,U32,U32);

void f6(s385retdecInstance*,U32);

void f7(s385retdecInstance*,U32,U32,U32);

void f8(s385retdecInstance*,U32,U32,U32);

void s385retdec____wasm_call_ctors(s385retdecInstance*i);

void s385retdec____wasm_apply_data_relocs(s385retdecInstance*i);

U32 s385retdec_func_1(s385retdecInstance*i);

void s385retdec_call_cb(s385retdecInstance*i,U32 l0);

void s385retdecInstantiate(s385retdecInstance* instance, void* resolve(const char* module, const char* name));

void s385retdecFreeInstance(s385retdecInstance* instance);

#endif /* s385retdec_H */

