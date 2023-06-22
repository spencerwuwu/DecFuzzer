#ifndef s348retdec_H
#define s348retdec_H

#include "w2c2_base.h"

typedef struct s348retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s348retdecInstance;

void f0(s348retdecInstance*);

void f1(s348retdecInstance*);

U32 f2(s348retdecInstance*);

void f3(s348retdecInstance*,U32);

U32 f4(s348retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s348retdecInstance*,U32,U32,U32,U32,U32);

void f6(s348retdecInstance*,U32);

void f7(s348retdecInstance*,U32,U32,U32);

void f8(s348retdecInstance*,U32,U32,U32);

void s348retdec____wasm_call_ctors(s348retdecInstance*i);

void s348retdec____wasm_apply_data_relocs(s348retdecInstance*i);

U32 s348retdec_func_1(s348retdecInstance*i);

void s348retdec_call_cb(s348retdecInstance*i,U32 l0);

void s348retdecInstantiate(s348retdecInstance* instance, void* resolve(const char* module, const char* name));

void s348retdecFreeInstance(s348retdecInstance* instance);

#endif /* s348retdec_H */

