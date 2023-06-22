#ifndef s395retdec_H
#define s395retdec_H

#include "w2c2_base.h"

typedef struct s395retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s395retdecInstance;

void f0(s395retdecInstance*);

void f1(s395retdecInstance*);

U32 f2(s395retdecInstance*);

void f3(s395retdecInstance*,U32);

U32 f4(s395retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s395retdecInstance*,U32,U32,U32,U32,U32);

void f6(s395retdecInstance*,U32);

void f7(s395retdecInstance*,U32,U32,U32);

void f8(s395retdecInstance*,U32,U32,U32);

void s395retdec____wasm_call_ctors(s395retdecInstance*i);

void s395retdec____wasm_apply_data_relocs(s395retdecInstance*i);

U32 s395retdec_func_1(s395retdecInstance*i);

void s395retdec_call_cb(s395retdecInstance*i,U32 l0);

void s395retdecInstantiate(s395retdecInstance* instance, void* resolve(const char* module, const char* name));

void s395retdecFreeInstance(s395retdecInstance* instance);

#endif /* s395retdec_H */

