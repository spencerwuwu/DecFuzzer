#ifndef s115retdec_H
#define s115retdec_H

#include "w2c2_base.h"

typedef struct s115retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s115retdecInstance;

void f0(s115retdecInstance*);

void f1(s115retdecInstance*);

U32 f2(s115retdecInstance*);

void f3(s115retdecInstance*,U32);

U32 f4(s115retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s115retdecInstance*,U32,U32,U32,U32,U32);

void f6(s115retdecInstance*,U32);

void f7(s115retdecInstance*,U32,U32,U32);

void f8(s115retdecInstance*,U32,U32,U32);

void s115retdec____wasm_call_ctors(s115retdecInstance*i);

void s115retdec____wasm_apply_data_relocs(s115retdecInstance*i);

U32 s115retdec_func_1(s115retdecInstance*i);

void s115retdec_call_cb(s115retdecInstance*i,U32 l0);

void s115retdecInstantiate(s115retdecInstance* instance, void* resolve(const char* module, const char* name));

void s115retdecFreeInstance(s115retdecInstance* instance);

#endif /* s115retdec_H */

