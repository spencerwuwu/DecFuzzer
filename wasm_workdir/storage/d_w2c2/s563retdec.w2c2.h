#ifndef s563retdec_H
#define s563retdec_H

#include "w2c2_base.h"

typedef struct s563retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s563retdecInstance;

void f0(s563retdecInstance*);

void f1(s563retdecInstance*);

U32 f2(s563retdecInstance*);

void f3(s563retdecInstance*,U32);

U32 f4(s563retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s563retdecInstance*,U32,U32,U32,U32,U32);

void f6(s563retdecInstance*,U32);

void f7(s563retdecInstance*,U32,U32,U32);

void f8(s563retdecInstance*,U32,U32,U32);

void s563retdec____wasm_call_ctors(s563retdecInstance*i);

void s563retdec____wasm_apply_data_relocs(s563retdecInstance*i);

U32 s563retdec_func_1(s563retdecInstance*i);

void s563retdec_call_cb(s563retdecInstance*i,U32 l0);

void s563retdecInstantiate(s563retdecInstance* instance, void* resolve(const char* module, const char* name));

void s563retdecFreeInstance(s563retdecInstance* instance);

#endif /* s563retdec_H */

