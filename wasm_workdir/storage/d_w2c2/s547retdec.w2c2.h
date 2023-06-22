#ifndef s547retdec_H
#define s547retdec_H

#include "w2c2_base.h"

typedef struct s547retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s547retdecInstance;

void f0(s547retdecInstance*);

void f1(s547retdecInstance*);

U32 f2(s547retdecInstance*);

void f3(s547retdecInstance*,U32);

U32 f4(s547retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s547retdecInstance*,U32,U32,U32,U32,U32);

void f6(s547retdecInstance*,U32);

void f7(s547retdecInstance*,U32,U32,U32);

void f8(s547retdecInstance*,U32,U32,U32);

void s547retdec____wasm_call_ctors(s547retdecInstance*i);

void s547retdec____wasm_apply_data_relocs(s547retdecInstance*i);

U32 s547retdec_func_1(s547retdecInstance*i);

void s547retdec_call_cb(s547retdecInstance*i,U32 l0);

void s547retdecInstantiate(s547retdecInstance* instance, void* resolve(const char* module, const char* name));

void s547retdecFreeInstance(s547retdecInstance* instance);

#endif /* s547retdec_H */

