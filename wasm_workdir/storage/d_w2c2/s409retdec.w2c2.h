#ifndef s409retdec_H
#define s409retdec_H

#include "w2c2_base.h"

typedef struct s409retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s409retdecInstance;

void f0(s409retdecInstance*);

void f1(s409retdecInstance*);

U32 f2(s409retdecInstance*);

void f3(s409retdecInstance*,U32);

U32 f4(s409retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s409retdecInstance*,U32,U32,U32,U32,U32);

void f6(s409retdecInstance*,U32);

void f7(s409retdecInstance*,U32,U32,U32);

void f8(s409retdecInstance*,U32,U32,U32);

void s409retdec____wasm_call_ctors(s409retdecInstance*i);

void s409retdec____wasm_apply_data_relocs(s409retdecInstance*i);

U32 s409retdec_func_1(s409retdecInstance*i);

void s409retdec_call_cb(s409retdecInstance*i,U32 l0);

void s409retdecInstantiate(s409retdecInstance* instance, void* resolve(const char* module, const char* name));

void s409retdecFreeInstance(s409retdecInstance* instance);

#endif /* s409retdec_H */

