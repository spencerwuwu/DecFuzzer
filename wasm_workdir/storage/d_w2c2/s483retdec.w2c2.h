#ifndef s483retdec_H
#define s483retdec_H

#include "w2c2_base.h"

typedef struct s483retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s483retdecInstance;

void f0(s483retdecInstance*);

void f1(s483retdecInstance*);

U32 f2(s483retdecInstance*);

void f3(s483retdecInstance*,U32);

U32 f4(s483retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s483retdecInstance*,U32,U32,U32,U32,U32);

void f6(s483retdecInstance*,U32);

void f7(s483retdecInstance*,U32,U32,U32);

void f8(s483retdecInstance*,U32,U32,U32);

void s483retdec____wasm_call_ctors(s483retdecInstance*i);

void s483retdec____wasm_apply_data_relocs(s483retdecInstance*i);

U32 s483retdec_func_1(s483retdecInstance*i);

void s483retdec_call_cb(s483retdecInstance*i,U32 l0);

void s483retdecInstantiate(s483retdecInstance* instance, void* resolve(const char* module, const char* name));

void s483retdecFreeInstance(s483retdecInstance* instance);

#endif /* s483retdec_H */

