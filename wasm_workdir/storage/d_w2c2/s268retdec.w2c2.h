#ifndef s268retdec_H
#define s268retdec_H

#include "w2c2_base.h"

typedef struct s268retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s268retdecInstance;

void f0(s268retdecInstance*);

void f1(s268retdecInstance*);

U32 f2(s268retdecInstance*);

void f3(s268retdecInstance*,U32);

U32 f4(s268retdecInstance*,U32,U32,U32,U32);

void f5(s268retdecInstance*,U32,U32,U32,U32,U32);

void f6(s268retdecInstance*,U32);

void f7(s268retdecInstance*,U32,U32,U32);

void f8(s268retdecInstance*,U32,U32,U32);

void s268retdec____wasm_call_ctors(s268retdecInstance*i);

void s268retdec____wasm_apply_data_relocs(s268retdecInstance*i);

U32 s268retdec_func_1(s268retdecInstance*i);

void s268retdec_call_cb(s268retdecInstance*i,U32 l0);

void s268retdecInstantiate(s268retdecInstance* instance, void* resolve(const char* module, const char* name));

void s268retdecFreeInstance(s268retdecInstance* instance);

#endif /* s268retdec_H */

