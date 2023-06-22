#ifndef s15retdec_H
#define s15retdec_H

#include "w2c2_base.h"

typedef struct s15retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s15retdecInstance;

void f0(s15retdecInstance*);

void f1(s15retdecInstance*);

U32 f2(s15retdecInstance*);

void f3(s15retdecInstance*,U32);

U32 f4(s15retdecInstance*,U32,U32,U32,U32,U32);

void f5(s15retdecInstance*,U32,U32,U32,U32,U32);

void f6(s15retdecInstance*,U32);

void f7(s15retdecInstance*,U32,U32,U32);

void f8(s15retdecInstance*,U32,U32,U32);

void s15retdec____wasm_call_ctors(s15retdecInstance*i);

void s15retdec____wasm_apply_data_relocs(s15retdecInstance*i);

U32 s15retdec_func_1(s15retdecInstance*i);

void s15retdec_call_cb(s15retdecInstance*i,U32 l0);

void s15retdecInstantiate(s15retdecInstance* instance, void* resolve(const char* module, const char* name));

void s15retdecFreeInstance(s15retdecInstance* instance);

#endif /* s15retdec_H */

