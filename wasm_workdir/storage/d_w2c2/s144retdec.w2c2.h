#ifndef s144retdec_H
#define s144retdec_H

#include "w2c2_base.h"

typedef struct s144retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s144retdecInstance;

void f0(s144retdecInstance*);

void f1(s144retdecInstance*);

U32 f2(s144retdecInstance*);

void f3(s144retdecInstance*,U32);

U32 f4(s144retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s144retdecInstance*,U32,U32,U32,U32,U32);

void f6(s144retdecInstance*,U32);

void f7(s144retdecInstance*,U32,U32,U32);

void f8(s144retdecInstance*,U32,U32,U32);

void s144retdec____wasm_call_ctors(s144retdecInstance*i);

void s144retdec____wasm_apply_data_relocs(s144retdecInstance*i);

U32 s144retdec_func_1(s144retdecInstance*i);

void s144retdec_call_cb(s144retdecInstance*i,U32 l0);

void s144retdecInstantiate(s144retdecInstance* instance, void* resolve(const char* module, const char* name));

void s144retdecFreeInstance(s144retdecInstance* instance);

#endif /* s144retdec_H */

