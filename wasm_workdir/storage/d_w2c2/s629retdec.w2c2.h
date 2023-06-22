#ifndef s629retdec_H
#define s629retdec_H

#include "w2c2_base.h"

typedef struct s629retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s629retdecInstance;

void f0(s629retdecInstance*);

void f1(s629retdecInstance*);

U32 f2(s629retdecInstance*);

void f3(s629retdecInstance*,U32);

U32 f4(s629retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s629retdecInstance*,U32,U32,U32,U32,U32);

void f6(s629retdecInstance*,U32);

void f7(s629retdecInstance*,U32,U32,U32);

void f8(s629retdecInstance*,U32,U32,U32);

void s629retdec____wasm_call_ctors(s629retdecInstance*i);

void s629retdec____wasm_apply_data_relocs(s629retdecInstance*i);

U32 s629retdec_func_1(s629retdecInstance*i);

void s629retdec_call_cb(s629retdecInstance*i,U32 l0);

void s629retdecInstantiate(s629retdecInstance* instance, void* resolve(const char* module, const char* name));

void s629retdecFreeInstance(s629retdecInstance* instance);

#endif /* s629retdec_H */

