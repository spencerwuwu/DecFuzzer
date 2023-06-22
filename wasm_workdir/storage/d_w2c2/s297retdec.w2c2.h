#ifndef s297retdec_H
#define s297retdec_H

#include "w2c2_base.h"

typedef struct s297retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s297retdecInstance;

void f0(s297retdecInstance*);

void f1(s297retdecInstance*);

U32 f2(s297retdecInstance*);

void f3(s297retdecInstance*,U32);

U32 f4(s297retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s297retdecInstance*,U32,U32,U32,U32,U32);

void f6(s297retdecInstance*,U32);

void f7(s297retdecInstance*,U32,U32,U32);

void f8(s297retdecInstance*,U32,U32,U32);

void s297retdec____wasm_call_ctors(s297retdecInstance*i);

void s297retdec____wasm_apply_data_relocs(s297retdecInstance*i);

U32 s297retdec_func_1(s297retdecInstance*i);

void s297retdec_call_cb(s297retdecInstance*i,U32 l0);

void s297retdecInstantiate(s297retdecInstance* instance, void* resolve(const char* module, const char* name));

void s297retdecFreeInstance(s297retdecInstance* instance);

#endif /* s297retdec_H */

