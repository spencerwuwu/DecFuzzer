#ifndef s709retdec_H
#define s709retdec_H

#include "w2c2_base.h"

typedef struct s709retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s709retdecInstance;

void f0(s709retdecInstance*);

void f1(s709retdecInstance*);

U32 f2(s709retdecInstance*);

void f3(s709retdecInstance*,U32);

U32 f4(s709retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s709retdecInstance*,U32,U32,U32,U32,U32);

void f6(s709retdecInstance*,U32);

void f7(s709retdecInstance*,U32,U32,U32);

void f8(s709retdecInstance*,U32,U32,U32);

void s709retdec____wasm_call_ctors(s709retdecInstance*i);

void s709retdec____wasm_apply_data_relocs(s709retdecInstance*i);

U32 s709retdec_func_1(s709retdecInstance*i);

void s709retdec_call_cb(s709retdecInstance*i,U32 l0);

void s709retdecInstantiate(s709retdecInstance* instance, void* resolve(const char* module, const char* name));

void s709retdecFreeInstance(s709retdecInstance* instance);

#endif /* s709retdec_H */

