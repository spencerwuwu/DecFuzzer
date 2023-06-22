#ifndef s973retdec_H
#define s973retdec_H

#include "w2c2_base.h"

typedef struct s973retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s973retdecInstance;

void f0(s973retdecInstance*);

void f1(s973retdecInstance*);

U32 f2(s973retdecInstance*);

void f3(s973retdecInstance*,U32);

U32 f4(s973retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s973retdecInstance*,U32,U32,U32,U32,U32);

void f6(s973retdecInstance*,U32);

void f7(s973retdecInstance*,U32,U32,U32);

void f8(s973retdecInstance*,U32,U32,U32);

void s973retdec____wasm_call_ctors(s973retdecInstance*i);

void s973retdec____wasm_apply_data_relocs(s973retdecInstance*i);

U32 s973retdec_func_1(s973retdecInstance*i);

void s973retdec_call_cb(s973retdecInstance*i,U32 l0);

void s973retdecInstantiate(s973retdecInstance* instance, void* resolve(const char* module, const char* name));

void s973retdecFreeInstance(s973retdecInstance* instance);

#endif /* s973retdec_H */

