#ifndef s323retdec_H
#define s323retdec_H

#include "w2c2_base.h"

typedef struct s323retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s323retdecInstance;

void f0(s323retdecInstance*);

void f1(s323retdecInstance*);

U32 f2(s323retdecInstance*);

void f3(s323retdecInstance*,U32);

U32 f4(s323retdecInstance*,U32,U32,U32,U32,U32);

void f5(s323retdecInstance*,U32,U32,U32,U32,U32);

void f6(s323retdecInstance*,U32);

void f7(s323retdecInstance*,U32,U32,U32);

void f8(s323retdecInstance*,U32,U32,U32);

void s323retdec____wasm_call_ctors(s323retdecInstance*i);

void s323retdec____wasm_apply_data_relocs(s323retdecInstance*i);

U32 s323retdec_func_1(s323retdecInstance*i);

void s323retdec_call_cb(s323retdecInstance*i,U32 l0);

void s323retdecInstantiate(s323retdecInstance* instance, void* resolve(const char* module, const char* name));

void s323retdecFreeInstance(s323retdecInstance* instance);

#endif /* s323retdec_H */

