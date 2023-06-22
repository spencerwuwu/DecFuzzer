#ifndef s809retdec_H
#define s809retdec_H

#include "w2c2_base.h"

typedef struct s809retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s809retdecInstance;

void f0(s809retdecInstance*);

void f1(s809retdecInstance*);

U32 f2(s809retdecInstance*);

void f3(s809retdecInstance*,U32);

U32 f4(s809retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s809retdecInstance*,U32,U32,U32,U32,U32);

void f6(s809retdecInstance*,U32);

void f7(s809retdecInstance*,U32,U32,U32);

void f8(s809retdecInstance*,U32,U32,U32);

void s809retdec____wasm_call_ctors(s809retdecInstance*i);

void s809retdec____wasm_apply_data_relocs(s809retdecInstance*i);

U32 s809retdec_func_1(s809retdecInstance*i);

void s809retdec_call_cb(s809retdecInstance*i,U32 l0);

void s809retdecInstantiate(s809retdecInstance* instance, void* resolve(const char* module, const char* name));

void s809retdecFreeInstance(s809retdecInstance* instance);

#endif /* s809retdec_H */

