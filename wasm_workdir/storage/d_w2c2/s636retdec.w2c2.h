#ifndef s636retdec_H
#define s636retdec_H

#include "w2c2_base.h"

typedef struct s636retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s636retdecInstance;

void f0(s636retdecInstance*);

void f1(s636retdecInstance*);

U32 f2(s636retdecInstance*);

void f3(s636retdecInstance*,U32);

U32 f4(s636retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s636retdecInstance*,U32,U32,U32,U32,U32);

void f6(s636retdecInstance*,U32);

void f7(s636retdecInstance*,U32,U32,U32);

void f8(s636retdecInstance*,U32,U32,U32);

void s636retdec____wasm_call_ctors(s636retdecInstance*i);

void s636retdec____wasm_apply_data_relocs(s636retdecInstance*i);

U32 s636retdec_func_1(s636retdecInstance*i);

void s636retdec_call_cb(s636retdecInstance*i,U32 l0);

void s636retdecInstantiate(s636retdecInstance* instance, void* resolve(const char* module, const char* name));

void s636retdecFreeInstance(s636retdecInstance* instance);

#endif /* s636retdec_H */

