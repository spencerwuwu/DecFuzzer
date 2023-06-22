#ifndef s530retdec_H
#define s530retdec_H

#include "w2c2_base.h"

typedef struct s530retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s530retdecInstance;

void f0(s530retdecInstance*);

void f1(s530retdecInstance*);

U32 f2(s530retdecInstance*);

void f3(s530retdecInstance*,U32);

U32 f4(s530retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s530retdecInstance*,U32,U32,U32,U32,U32);

void f6(s530retdecInstance*,U32);

void f7(s530retdecInstance*,U32,U32,U32);

void f8(s530retdecInstance*,U32,U32,U32);

void s530retdec____wasm_call_ctors(s530retdecInstance*i);

void s530retdec____wasm_apply_data_relocs(s530retdecInstance*i);

U32 s530retdec_func_1(s530retdecInstance*i);

void s530retdec_call_cb(s530retdecInstance*i,U32 l0);

void s530retdecInstantiate(s530retdecInstance* instance, void* resolve(const char* module, const char* name));

void s530retdecFreeInstance(s530retdecInstance* instance);

#endif /* s530retdec_H */

