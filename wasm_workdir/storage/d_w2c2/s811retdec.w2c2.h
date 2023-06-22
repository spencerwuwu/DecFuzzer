#ifndef s811retdec_H
#define s811retdec_H

#include "w2c2_base.h"

typedef struct s811retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s811retdecInstance;

void f0(s811retdecInstance*);

void f1(s811retdecInstance*);

U32 f2(s811retdecInstance*);

void f3(s811retdecInstance*,U32);

U32 f4(s811retdecInstance*,U32,U32,U32,U32);

void f5(s811retdecInstance*,U32,U32,U32,U32,U32);

void f6(s811retdecInstance*,U32);

void f7(s811retdecInstance*,U32,U32,U32);

void f8(s811retdecInstance*,U32,U32,U32);

void s811retdec____wasm_call_ctors(s811retdecInstance*i);

void s811retdec____wasm_apply_data_relocs(s811retdecInstance*i);

U32 s811retdec_func_1(s811retdecInstance*i);

void s811retdec_call_cb(s811retdecInstance*i,U32 l0);

void s811retdecInstantiate(s811retdecInstance* instance, void* resolve(const char* module, const char* name));

void s811retdecFreeInstance(s811retdecInstance* instance);

#endif /* s811retdec_H */

