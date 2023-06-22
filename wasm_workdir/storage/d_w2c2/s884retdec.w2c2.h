#ifndef s884retdec_H
#define s884retdec_H

#include "w2c2_base.h"

typedef struct s884retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s884retdecInstance;

void f0(s884retdecInstance*);

void f1(s884retdecInstance*);

U32 f2(s884retdecInstance*);

void f3(s884retdecInstance*,U32);

U32 f4(s884retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s884retdecInstance*,U32,U32,U32,U32,U32);

void f6(s884retdecInstance*,U32);

void f7(s884retdecInstance*,U32,U32,U32);

void f8(s884retdecInstance*,U32,U32,U32);

void s884retdec____wasm_call_ctors(s884retdecInstance*i);

void s884retdec____wasm_apply_data_relocs(s884retdecInstance*i);

U32 s884retdec_func_1(s884retdecInstance*i);

void s884retdec_call_cb(s884retdecInstance*i,U32 l0);

void s884retdecInstantiate(s884retdecInstance* instance, void* resolve(const char* module, const char* name));

void s884retdecFreeInstance(s884retdecInstance* instance);

#endif /* s884retdec_H */

