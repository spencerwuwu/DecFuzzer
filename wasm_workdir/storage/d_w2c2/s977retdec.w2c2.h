#ifndef s977retdec_H
#define s977retdec_H

#include "w2c2_base.h"

typedef struct s977retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s977retdecInstance;

void f0(s977retdecInstance*);

void f1(s977retdecInstance*);

U32 f2(s977retdecInstance*);

void f3(s977retdecInstance*,U32);

U32 f4(s977retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s977retdecInstance*,U32,U32,U32,U32,U32);

void f6(s977retdecInstance*,U32);

void f7(s977retdecInstance*,U32,U32,U32);

void f8(s977retdecInstance*,U32,U32,U32);

void s977retdec____wasm_call_ctors(s977retdecInstance*i);

void s977retdec____wasm_apply_data_relocs(s977retdecInstance*i);

U32 s977retdec_func_1(s977retdecInstance*i);

void s977retdec_call_cb(s977retdecInstance*i,U32 l0);

void s977retdecInstantiate(s977retdecInstance* instance, void* resolve(const char* module, const char* name));

void s977retdecFreeInstance(s977retdecInstance* instance);

#endif /* s977retdec_H */

