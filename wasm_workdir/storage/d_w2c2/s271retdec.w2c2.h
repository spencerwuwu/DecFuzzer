#ifndef s271retdec_H
#define s271retdec_H

#include "w2c2_base.h"

typedef struct s271retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s271retdecInstance;

void f0(s271retdecInstance*);

void f1(s271retdecInstance*);

U32 f2(s271retdecInstance*);

void f3(s271retdecInstance*,U32);

void f4(s271retdecInstance*,U32);

void s271retdec____wasm_call_ctors(s271retdecInstance*i);

void s271retdec____wasm_apply_data_relocs(s271retdecInstance*i);

U32 s271retdec_func_1(s271retdecInstance*i);

void s271retdec_call_cb(s271retdecInstance*i,U32 l0);

void s271retdecInstantiate(s271retdecInstance* instance, void* resolve(const char* module, const char* name));

void s271retdecFreeInstance(s271retdecInstance* instance);

#endif /* s271retdec_H */

