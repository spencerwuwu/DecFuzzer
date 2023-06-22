#ifndef s456retdec_H
#define s456retdec_H

#include "w2c2_base.h"

typedef struct s456retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s456retdecInstance;

void f0(s456retdecInstance*);

void f1(s456retdecInstance*);

U32 f2(s456retdecInstance*);

void f3(s456retdecInstance*,U32);

U32 f4(s456retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s456retdecInstance*,U32,U32,U32,U32,U32);

void f6(s456retdecInstance*,U32);

void f7(s456retdecInstance*,U32,U32,U32);

void f8(s456retdecInstance*,U32,U32,U32);

void s456retdec____wasm_call_ctors(s456retdecInstance*i);

void s456retdec____wasm_apply_data_relocs(s456retdecInstance*i);

U32 s456retdec_func_1(s456retdecInstance*i);

void s456retdec_call_cb(s456retdecInstance*i,U32 l0);

void s456retdecInstantiate(s456retdecInstance* instance, void* resolve(const char* module, const char* name));

void s456retdecFreeInstance(s456retdecInstance* instance);

#endif /* s456retdec_H */

