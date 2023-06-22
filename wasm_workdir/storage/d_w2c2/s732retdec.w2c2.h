#ifndef s732retdec_H
#define s732retdec_H

#include "w2c2_base.h"

typedef struct s732retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s732retdecInstance;

void f0(s732retdecInstance*);

void f1(s732retdecInstance*);

U32 f2(s732retdecInstance*);

void f3(s732retdecInstance*,U32);

U32 f4(s732retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s732retdecInstance*,U32,U32,U32,U32,U32);

void f6(s732retdecInstance*,U32);

void f7(s732retdecInstance*,U32,U32,U32);

void f8(s732retdecInstance*,U32,U32,U32);

void s732retdec____wasm_call_ctors(s732retdecInstance*i);

void s732retdec____wasm_apply_data_relocs(s732retdecInstance*i);

U32 s732retdec_func_1(s732retdecInstance*i);

void s732retdec_call_cb(s732retdecInstance*i,U32 l0);

void s732retdecInstantiate(s732retdecInstance* instance, void* resolve(const char* module, const char* name));

void s732retdecFreeInstance(s732retdecInstance* instance);

#endif /* s732retdec_H */

