#ifndef s26retdec_H
#define s26retdec_H

#include "w2c2_base.h"

typedef struct s26retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s26retdecInstance;

void f0(s26retdecInstance*);

void f1(s26retdecInstance*);

U32 f2(s26retdecInstance*);

void f3(s26retdecInstance*,U32);

U32 f4(s26retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s26retdecInstance*,U32,U32,U32,U32,U32);

void f6(s26retdecInstance*,U32);

void f7(s26retdecInstance*,U32,U32,U32);

void f8(s26retdecInstance*,U32,U32,U32);

void s26retdec____wasm_call_ctors(s26retdecInstance*i);

void s26retdec____wasm_apply_data_relocs(s26retdecInstance*i);

U32 s26retdec_func_1(s26retdecInstance*i);

void s26retdec_call_cb(s26retdecInstance*i,U32 l0);

void s26retdecInstantiate(s26retdecInstance* instance, void* resolve(const char* module, const char* name));

void s26retdecFreeInstance(s26retdecInstance* instance);

#endif /* s26retdec_H */

