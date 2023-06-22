#ifndef s617retdec_H
#define s617retdec_H

#include "w2c2_base.h"

typedef struct s617retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s617retdecInstance;

void f0(s617retdecInstance*);

void f1(s617retdecInstance*);

U32 f2(s617retdecInstance*);

void f3(s617retdecInstance*,U32);

U32 f4(s617retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s617retdecInstance*,U32,U32,U32,U32,U32);

void f6(s617retdecInstance*,U32);

void f7(s617retdecInstance*,U32,U32,U32);

void f8(s617retdecInstance*,U32,U32,U32);

void s617retdec____wasm_call_ctors(s617retdecInstance*i);

void s617retdec____wasm_apply_data_relocs(s617retdecInstance*i);

U32 s617retdec_func_1(s617retdecInstance*i);

void s617retdec_call_cb(s617retdecInstance*i,U32 l0);

void s617retdecInstantiate(s617retdecInstance* instance, void* resolve(const char* module, const char* name));

void s617retdecFreeInstance(s617retdecInstance* instance);

#endif /* s617retdec_H */

