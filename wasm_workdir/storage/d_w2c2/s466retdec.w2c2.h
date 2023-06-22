#ifndef s466retdec_H
#define s466retdec_H

#include "w2c2_base.h"

typedef struct s466retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s466retdecInstance;

void f0(s466retdecInstance*);

void f1(s466retdecInstance*);

U32 f2(s466retdecInstance*);

void f3(s466retdecInstance*,U32);

U32 f4(s466retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s466retdecInstance*,U32,U32,U32,U32,U32);

void f6(s466retdecInstance*,U32);

void f7(s466retdecInstance*,U32,U32,U32);

void f8(s466retdecInstance*,U32,U32,U32);

void s466retdec____wasm_call_ctors(s466retdecInstance*i);

void s466retdec____wasm_apply_data_relocs(s466retdecInstance*i);

U32 s466retdec_func_1(s466retdecInstance*i);

void s466retdec_call_cb(s466retdecInstance*i,U32 l0);

void s466retdecInstantiate(s466retdecInstance* instance, void* resolve(const char* module, const char* name));

void s466retdecFreeInstance(s466retdecInstance* instance);

#endif /* s466retdec_H */

