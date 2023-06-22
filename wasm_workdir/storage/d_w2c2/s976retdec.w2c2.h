#ifndef s976retdec_H
#define s976retdec_H

#include "w2c2_base.h"

typedef struct s976retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s976retdecInstance;

void f0(s976retdecInstance*);

void f1(s976retdecInstance*);

U32 f2(s976retdecInstance*);

void f3(s976retdecInstance*,U32);

U32 f4(s976retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s976retdecInstance*,U32,U32,U32,U32,U32);

void f6(s976retdecInstance*,U32);

void f7(s976retdecInstance*,U32,U32,U32);

void f8(s976retdecInstance*,U32,U32,U32);

void s976retdec____wasm_call_ctors(s976retdecInstance*i);

void s976retdec____wasm_apply_data_relocs(s976retdecInstance*i);

U32 s976retdec_func_1(s976retdecInstance*i);

void s976retdec_call_cb(s976retdecInstance*i,U32 l0);

void s976retdecInstantiate(s976retdecInstance* instance, void* resolve(const char* module, const char* name));

void s976retdecFreeInstance(s976retdecInstance* instance);

#endif /* s976retdec_H */

