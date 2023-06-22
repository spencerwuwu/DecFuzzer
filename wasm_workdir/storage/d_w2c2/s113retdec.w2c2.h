#ifndef s113retdec_H
#define s113retdec_H

#include "w2c2_base.h"

typedef struct s113retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s113retdecInstance;

void f0(s113retdecInstance*);

void f1(s113retdecInstance*);

U32 f2(s113retdecInstance*);

void f3(s113retdecInstance*,U32);

U32 f4(s113retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s113retdecInstance*,U32,U32,U32,U32,U32);

void f6(s113retdecInstance*,U32);

void f7(s113retdecInstance*,U32,U32,U32);

void f8(s113retdecInstance*,U32,U32,U32);

void s113retdec____wasm_call_ctors(s113retdecInstance*i);

void s113retdec____wasm_apply_data_relocs(s113retdecInstance*i);

U32 s113retdec_func_1(s113retdecInstance*i);

void s113retdec_call_cb(s113retdecInstance*i,U32 l0);

void s113retdecInstantiate(s113retdecInstance* instance, void* resolve(const char* module, const char* name));

void s113retdecFreeInstance(s113retdecInstance* instance);

#endif /* s113retdec_H */

