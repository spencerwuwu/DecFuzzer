#ifndef s391retdec_H
#define s391retdec_H

#include "w2c2_base.h"

typedef struct s391retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s391retdecInstance;

void f0(s391retdecInstance*);

void f1(s391retdecInstance*);

U32 f2(s391retdecInstance*);

void f3(s391retdecInstance*,U32);

U32 f4(s391retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s391retdecInstance*,U32,U32,U32,U32,U32);

void f6(s391retdecInstance*,U32);

void f7(s391retdecInstance*,U32,U32,U32);

void f8(s391retdecInstance*,U32,U32,U32);

void s391retdec____wasm_call_ctors(s391retdecInstance*i);

void s391retdec____wasm_apply_data_relocs(s391retdecInstance*i);

U32 s391retdec_func_1(s391retdecInstance*i);

void s391retdec_call_cb(s391retdecInstance*i,U32 l0);

void s391retdecInstantiate(s391retdecInstance* instance, void* resolve(const char* module, const char* name));

void s391retdecFreeInstance(s391retdecInstance* instance);

#endif /* s391retdec_H */

