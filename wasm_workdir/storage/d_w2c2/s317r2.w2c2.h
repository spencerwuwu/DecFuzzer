#ifndef s317r2_H
#define s317r2_H

#include "w2c2_base.h"

typedef struct s317r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s317r2Instance;

void f0(s317r2Instance*);

void f1(s317r2Instance*);

U32 f2(s317r2Instance*);

void f3(s317r2Instance*,U32);

U32 f4(s317r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s317r2Instance*,U32,U32,U32,U32,U32);

void f6(s317r2Instance*,U32);

void f7(s317r2Instance*,U32,U32,U32);

void f8(s317r2Instance*,U32,U32,U32);

void s317r2____wasm_call_ctors(s317r2Instance*i);

void s317r2____wasm_apply_data_relocs(s317r2Instance*i);

U32 s317r2_func_1(s317r2Instance*i);

void s317r2_call_cb(s317r2Instance*i,U32 l0);

void s317r2Instantiate(s317r2Instance* instance, void* resolve(const char* module, const char* name));

void s317r2FreeInstance(s317r2Instance* instance);

#endif /* s317r2_H */

