#ifndef s710retdec_H
#define s710retdec_H

#include "w2c2_base.h"

typedef struct s710retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s710retdecInstance;

void f0(s710retdecInstance*);

void f1(s710retdecInstance*);

U32 f2(s710retdecInstance*);

void f3(s710retdecInstance*,U32);

U32 f4(s710retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s710retdecInstance*,U32,U32,U32,U32,U32);

void f6(s710retdecInstance*,U32);

void f7(s710retdecInstance*,U32,U32,U32);

void f8(s710retdecInstance*,U32,U32,U32);

void s710retdec____wasm_call_ctors(s710retdecInstance*i);

void s710retdec____wasm_apply_data_relocs(s710retdecInstance*i);

U32 s710retdec_func_1(s710retdecInstance*i);

void s710retdec_call_cb(s710retdecInstance*i,U32 l0);

void s710retdecInstantiate(s710retdecInstance* instance, void* resolve(const char* module, const char* name));

void s710retdecFreeInstance(s710retdecInstance* instance);

#endif /* s710retdec_H */

