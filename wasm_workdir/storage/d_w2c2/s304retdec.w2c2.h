#ifndef s304retdec_H
#define s304retdec_H

#include "w2c2_base.h"

typedef struct s304retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s304retdecInstance;

void f0(s304retdecInstance*);

void f1(s304retdecInstance*);

U32 f2(s304retdecInstance*);

void f3(s304retdecInstance*,U32);

U32 f4(s304retdecInstance*,U32,U32,U32,U32);

void f5(s304retdecInstance*,U32,U32,U32,U32,U32);

void f6(s304retdecInstance*,U32);

void f7(s304retdecInstance*,U32,U32,U32);

void f8(s304retdecInstance*,U32,U32,U32);

void s304retdec____wasm_call_ctors(s304retdecInstance*i);

void s304retdec____wasm_apply_data_relocs(s304retdecInstance*i);

U32 s304retdec_func_1(s304retdecInstance*i);

void s304retdec_call_cb(s304retdecInstance*i,U32 l0);

void s304retdecInstantiate(s304retdecInstance* instance, void* resolve(const char* module, const char* name));

void s304retdecFreeInstance(s304retdecInstance* instance);

#endif /* s304retdec_H */

