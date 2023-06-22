#ifndef s292retdec_H
#define s292retdec_H

#include "w2c2_base.h"

typedef struct s292retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s292retdecInstance;

void f0(s292retdecInstance*);

void f1(s292retdecInstance*);

U32 f2(s292retdecInstance*);

void f3(s292retdecInstance*,U32);

U32 f4(s292retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s292retdecInstance*,U32,U32,U32,U32,U32);

void f6(s292retdecInstance*,U32);

void f7(s292retdecInstance*,U32,U32,U32);

void f8(s292retdecInstance*,U32,U32,U32);

void s292retdec____wasm_call_ctors(s292retdecInstance*i);

void s292retdec____wasm_apply_data_relocs(s292retdecInstance*i);

U32 s292retdec_func_1(s292retdecInstance*i);

void s292retdec_call_cb(s292retdecInstance*i,U32 l0);

void s292retdecInstantiate(s292retdecInstance* instance, void* resolve(const char* module, const char* name));

void s292retdecFreeInstance(s292retdecInstance* instance);

#endif /* s292retdec_H */

